#include "typecheck.hpp"

// Defines the function used to throw type errors. The possible
// type errors are defined as an enumeration in the header file.
void typeError(TypeErrorCode code) {
  switch (code) {
    case undefined_variable:
      std::cerr << "Undefined variable." << std::endl;
      break;
    case undefined_method:
      std::cerr << "Method does not exist." << std::endl;
      break;
    case undefined_class:
      std::cerr << "Class does not exist." << std::endl;
      break;
    case undefined_member:
      std::cerr << "Class member does not exist." << std::endl;
      break;
    case not_object:
      std::cerr << "Variable is not an object." << std::endl;
      break;
    case expression_type_mismatch:
      std::cerr << "Expression types do not match." << std::endl;
      break;
    case argument_number_mismatch:
      std::cerr << "Method called with incorrect number of arguments." << std::endl;
      break;
    case argument_type_mismatch:
      std::cerr << "Method called with argument of incorrect type." << std::endl;
      break;
    case while_predicate_type_mismatch:
      std::cerr << "Predicate of while loop is not boolean." << std::endl;
      break;
    case do_while_predicate_type_mismatch:
      std::cerr << "Predicate of do while loop is not boolean." << std::endl;
      break;
    case if_predicate_type_mismatch:
      std::cerr << "Predicate of if statement is not boolean." << std::endl;
      break;
    case assignment_type_mismatch:
      std::cerr << "Left and right hand sides of assignment types mismatch." << std::endl;
      break;
    case return_type_mismatch:
      std::cerr << "Return statement type does not match declared return type." << std::endl;
      break;
    case constructor_returns_type:
      std::cerr << "Class constructor returns a value." << std::endl;
      break;
    case no_main_class:
      std::cerr << "The \"Main\" class was not found." << std::endl;
      break;
    case main_class_members_present:
      std::cerr << "The \"Main\" class has members." << std::endl;
      break;
    case no_main_method:
      std::cerr << "The \"Main\" class does not have a \"main\" method." << std::endl;
      break;
    case main_method_incorrect_signature:
      std::cerr << "The \"main\" method of the \"Main\" class has an incorrect signature." << std::endl;
      break;
  }
  exit(1);
}

// TypeCheck Visitor Functions: These are the functions you will
// complete to build the symbol table and type check the program.
// Not all functions must have code, many may be left empty.

void TypeCheck::visitProgramNode(ProgramNode* node) {
  // WRITEME: Replace with code if necessary
  classTable = new ClassTable();
  node->visit_children(this);
}

void TypeCheck::visitClassNode(ClassNode* node) {
  // WRITEME: Replace with code if necessary
  currentVariableTable = NULL;
  currentMemberOffset = -4;
  VariableInfo v;
  CompoundType a;
  ClassInfo c;
  c.methods = new MethodTable();
  currentMethodTable = c.methods;

  node->visit_children(this); // Visits Declaration Node then Method Node
  currentClassName = node->identifier_1->name;
  
  if(node->identifier_2 == NULL) {
    c.superClassName = "";
  }
  else{
    c.superClassName = node->identifier_2->name;
  }
  
  c.members = new VariableTable(); 
  currentVariableTable = c.members;

  // MORE WORK TO DO HERE TO ADD CLASS MEETHODS

  //Here we add the class members
  if (node->declaration_list) {
      for(std::list<DeclarationNode*>::iterator iter = node->declaration_list->begin();
          iter != node->declaration_list->end(); iter++) {
        a.baseType = (*iter)->type->basetype;
        if(a.baseType == bt_object){
          a.objectClassName = (*iter)->type->objectClassName;
        }
        else{
          a.objectClassName = "";
        }
        v.type = a;
        v.size = 4;

        for(std::list<IdentifierNode*>::iterator itera = (*iter)->identifier_list->begin();
          itera != (*iter)->identifier_list->end(); itera++){
            v.offset = currentMemberOffset + v.size;
            currentMemberOffset += v.size;
            currentVariableTable->insert(std::pair<std::string, VariableInfo> ((*itera)->name, v));
        }
      }
  }


  // ??? c.membersSize = c.members.size();
  classTable->insert(std::pair<std::string, ClassInfo> (currentClassName, c));

}

void TypeCheck::visitMethodNode(MethodNode* node) {
  // WRITEME: Replace with code if necessary 
  CompoundType c;
  

  MethodInfo m;
  m.variables = new VariableTable();
  m.parameters = new std::list<CompoundType> ();
  currentVariableTable = m.variables;

  node->visit_children(this);
  
  c.baseType = node->basetype;
  c.objectClassName = node->objectClassName;
  m.returnType = c;
  currentLocalOffset = 0;

  node->basetype = node->type->basetype;

  if(node->basetype == bt_object){
        node->objectClassName = node->type->objectClassName;
      }
      else{
        node->objectClassName = "";
      }
  
  //TODO: Is setting objectClassName right when we don't know the exact basetype?
 

  VariableInfo v;
  CompoundType a;

  //Here we insert method declarations
  if (node->methodbody->declaration_list) {
    for(std::list<DeclarationNode*>::iterator iter = node->methodbody->declaration_list->begin();
        iter != node->methodbody->declaration_list->end(); iter++) {
      a.baseType = (*iter)->type->basetype;
      if(a.baseType == bt_object){
        a.objectClassName = (*iter)->type->objectClassName;
      }
      else{
        a.objectClassName = "";
      }
      v.type = a;
      v.size = 4;
  
        for(std::list<IdentifierNode*>::iterator itera = (*iter)->identifier_list->begin();
          itera != (*iter)->identifier_list->end(); itera++){
            v.offset = currentLocalOffset - v.size;
            currentLocalOffset -= v.size;
            currentVariableTable->insert(std::pair<std::string, VariableInfo> ((*itera)->name, v));
          }
    }
  }
  m.localsSize = -(currentLocalOffset);
  currentMethodTable->insert(std::pair<std::string, MethodInfo> (node->identifier->name, m));

  //Here we insert the method parameters
  if (node->parameter_list) {
    currentParameterOffset = 8;
    for(std::list<ParameterNode*>::iterator iter = node->parameter_list->begin();
        iter != node->parameter_list->end(); iter++) {
          
      a.baseType = (*iter)->type->basetype;
      if(a.baseType == bt_object){
        a.objectClassName = (*iter)->type->objectClassName;
      }
      else{
        a.objectClassName = "";
      }

      (m.parameters)->push_back(a);
      v.type = a;
      v.size = 4;
      v.offset = currentParameterOffset + v.size;
      currentParameterOffset += v.size;

      currentVariableTable->insert(std::pair<std::string, VariableInfo> ((*iter)->identifier->name, v));
    }
  }
  // HERE WE ARE

  
}

void TypeCheck::visitMethodBodyNode(MethodBodyNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
}

void TypeCheck::visitParameterNode(ParameterNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  node->basetype = node->type->basetype;
  if(node->basetype == bt_object){
    node->objectClassName = node->type->objectClassName; 
  }
  else{
     node->objectClassName = "";
  }

  CompoundType c;
  c.baseType = node->basetype;
  c.objectClassName = node->objectClassName;
  



}

void TypeCheck::visitDeclarationNode(DeclarationNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  int x;
  if(currentVariableTable == NULL){
    // // CLASS MEMBER
    currentVariableTable = new VariableTable();
    //How can we reference the table here?
    x = 5;
  }
  
  else{
    // METHOD VARIABLE
    node->basetype = node->type->basetype;
    // node->identifier_list
    IdentifierNode* pIN = node->identifier_list->front();
    std::string name = pIN->name;
    delete pIN;
    if(node->basetype == bt_object) {
      node->objectClassName = node->type->objectClassName;
    } 
    CompoundType c;
    VariableInfo v;
    c.baseType = node->basetype;
    c.objectClassName = node->objectClassName;
    v.type = c;
    v.offset = 0;
    v.size = 4;

    //Here we insert into ??? which table?
    //currentVariableTable->insert( std::pair<std::string, VariableInfo> (name, v));
  }
  
  

}

void TypeCheck::visitReturnStatementNode(ReturnStatementNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  node->basetype = node->expression->basetype;


}

void TypeCheck::visitAssignmentNode(AssignmentNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  VariableInfo vi;
  ClassInfo c;
  BaseType  b;
  if(node->identifier_2 == NULL){
    // Only need to check whether the id is of the same type
    int i = currentVariableTable->count(node->identifier_1->name);
    if(i){
      vi = (*currentVariableTable)[node->identifier_1->name];
      b = vi.type.baseType;

      if(node->expression->basetype != b){
        typeError(assignment_type_mismatch);
      }
    }
    else{
      typeError(undefined_variable);
    }
    
  }
  else{
    // Need to check if T_id.T_id is of the same type as the expression
    if(classTable->count(node->identifier_1->name)){
      // HOPE THIS WORKS
      c = (*classTable)[node->identifier_1->name];
      if(c.members->count(node->identifier_2->name)){
        vi = (*(c.members))[node->identifier_1->name];
        b = vi.type.baseType;
        if(node->expression->basetype != b){
          typeError(assignment_type_mismatch);
        }
      }
      else{
        typeError(undefined_member);
      }
    }
    else{
      typeError(undefined_class);
    }
  }
  
  // IF ID 1 == CLASSNAME THEN LOOK AT THE MEMBER VARIABLES FOR IDENTIFIER 2

  
}

void TypeCheck::visitCallNode(CallNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitIfElseNode(IfElseNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression->basetype != bt_boolean){
    typeError(if_predicate_type_mismatch);
  }
}

void TypeCheck::visitWhileNode(WhileNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression->basetype != bt_boolean){
    typeError(while_predicate_type_mismatch);
  }
}

void TypeCheck::visitDoWhileNode(DoWhileNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression->basetype != bt_boolean){
    typeError(do_while_predicate_type_mismatch
    );
  }
  
}

void TypeCheck::visitPrintNode(PrintNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitPlusNode(PlusNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitMinusNode(MinusNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitTimesNode(TimesNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitDivideNode(DivideNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitGreaterNode(GreaterNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitGreaterEqualNode(GreaterEqualNode* node) {
  // WRITEME: Replace with code if necessary
}

void TypeCheck::visitEqualNode(EqualNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  BaseType LHS = node->expression_1->basetype;
  BaseType RHS = node->expression_2->basetype;
  
}

void TypeCheck::visitAndNode(AndNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression_1->basetype != bt_boolean || node->expression_2->basetype != bt_boolean) {
    typeError(expression_type_mismatch);
  }
  node->basetype = bt_boolean;
}

void TypeCheck::visitOrNode(OrNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression_1->basetype != bt_boolean || node->expression_2->basetype != bt_boolean) {
    typeError(expression_type_mismatch);
  }
  node->basetype = bt_boolean;

}

void TypeCheck::visitNotNode(NotNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression->basetype != bt_boolean) {
    typeError(expression_type_mismatch);
  }
  node->basetype = node->expression->basetype;

}

void TypeCheck::visitNegationNode(NegationNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(node->expression->basetype != bt_integer) {
    typeError(expression_type_mismatch);
  }
  node->basetype = node->expression->basetype;

}

void TypeCheck::visitMethodCallNode(MethodCallNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  //Type defined in MethodInfo
}

void TypeCheck::visitMemberAccessNode(MemberAccessNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  //Type defined in variableInfo
}

void TypeCheck::visitVariableNode(VariableNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  //Type defined in variable info
}

void TypeCheck::visitIntegerLiteralNode(IntegerLiteralNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_integer;
}

void TypeCheck::visitBooleanLiteralNode(BooleanLiteralNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_boolean;
}

void TypeCheck::visitNewNode(NewNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  node->basetype = node->identifier->basetype;
}

void TypeCheck::visitIntegerTypeNode(IntegerTypeNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_integer;
}

void TypeCheck::visitBooleanTypeNode(BooleanTypeNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_boolean;
}

void TypeCheck::visitObjectTypeNode(ObjectTypeNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_object;
  node->objectClassName = node->identifier->name;
}

void TypeCheck::visitNoneNode(NoneNode* node) {
  // WRITEME: Replace with code if necessary
  node->basetype = bt_none;
}

void TypeCheck::visitIdentifierNode(IdentifierNode* node) {
  // c0 c1; THIS METHOD IS ABOUT c1

}

void TypeCheck::visitIntegerNode(IntegerNode* node) {
  // WRITEME: Replace with code if necessary
}


// The following functions are used to print the Symbol Table.
// They do not need to be modified at all.

std::string genIndent(int indent) {
  std::string string = std::string("");
  for (int i = 0; i < indent; i++)
    string += std::string(" ");
  return string;
}

std::string string(CompoundType type) {
  switch (type.baseType) {
    case bt_integer:
      return std::string("Integer");
    case bt_boolean:
      return std::string("Boolean");
    case bt_none:
      return std::string("None");
    case bt_object:
      return std::string("Object(") + type.objectClassName + std::string(")");
    default:
      return std::string("");
  }
}


void print(VariableTable variableTable, int indent) {
  std::cout << genIndent(indent) << "VariableTable {";
  if (variableTable.size() == 0) {
    std::cout << "}";
    return;
  }
  std::cout << std::endl;
  for (VariableTable::iterator it = variableTable.begin(); it != variableTable.end(); it++) {
    std::cout << genIndent(indent + 2) << it->first << " -> {" << string(it->second.type);
    std::cout << ", " << it->second.offset << ", " << it->second.size << "}";
    if (it != --variableTable.end())
      std::cout << ",";
    std::cout << std::endl;
  }
  std::cout << genIndent(indent) << "}";
}

void print(MethodTable methodTable, int indent) {
  std::cout << genIndent(indent) << "MethodTable {";
  if (methodTable.size() == 0) {
    std::cout << "}";
    return;
  }
  std::cout << std::endl;
  for (MethodTable::iterator it = methodTable.begin(); it != methodTable.end(); it++) {
    std::cout << genIndent(indent + 2) << it->first << " -> {" << std::endl;
    std::cout << genIndent(indent + 4) << string(it->second.returnType) << "," << std::endl;
    std::cout << genIndent(indent + 4) << it->second.localsSize << "," << std::endl;
    print(*it->second.variables, indent + 4);
    std::cout <<std::endl;
    std::cout << genIndent(indent + 2) << "}";
    if (it != --methodTable.end())
      std::cout << ",";
    std::cout << std::endl;
  }
  std::cout << genIndent(indent) << "}";
}

void print(ClassTable classTable, int indent) {
  std::cout << genIndent(indent) << "ClassTable {" << std::endl;
  for (ClassTable::iterator it = classTable.begin(); it != classTable.end(); it++) {
    std::cout << genIndent(indent + 2) << it->first << " -> {" << std::endl;
    if (it->second.superClassName != "")
      std::cout << genIndent(indent + 4) << it->second.superClassName << "," << std::endl;
    print(*it->second.members, indent + 4);
    std::cout << "," << std::endl;
    print(*it->second.methods, indent + 4);
    std::cout <<std::endl;
    std::cout << genIndent(indent + 2) << "}";
    if (it != --classTable.end())
      std::cout << ",";
    std::cout << std::endl;
  }
  std::cout << genIndent(indent) << "}" << std::endl;
}

void print(ClassTable classTable) {
  print(classTable, 0);
}
