#include <BinarySearchTree.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Add(18, root);
    
    REQUIRE( rv == 18);
}
SCENARIO("print") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.print(19, root);
    
    REQUIRE( rv == 19);
}
SCENARIO("Search") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(20, root);
    
    REQUIRE( rv == 20);
}
SCENARIO("Delete_value") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(21, root);
    
    REQUIRE( rv == 21);
}
SCENARIO("FreeTree") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(22, root);
    
    REQUIRE( rv == 22);
}
