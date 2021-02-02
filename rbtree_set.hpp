#ifndef RBTREE_HPP
#define RBTREE_HPP

#include <functional>
#include <memory>
#include <iterator>

template<
        class Key,
        class Compare = std::less<Key>,
        class Allocator = std::allocator<Key>>
class RBTreeSet
{
public:
    // Member type specification (since C++17)
    using key_type = Key;
    using value_type = Key;
    using size_type = typename std::size_t;
    using difference_type = typename std::ptrdiff_t;
    using key_compare = Compare;
    using value_compare = Compare;
    using allocator_type = Allocator;
    using reference = value_type&;
    using const_reference = const value_type&;
    using pointer = typename std::allocator_traits<Allocator>::pointer;
    using const_pointer = typename std::allocator_traits<Allocator>::const_pointer;
    /// TODO: Implement iterators
//    using iterator = typename std::iterator<
//                        std::bidirectional_iterator_tag,
//                        RBTree,
//                        RBTree::pointer,
//                        RBTree::reference>;
//    using const_iterator = typename
//    using reverse_iterator = typename std::reverse_iterator<iterator>;
//    using const_reverse_iterator = typename std::reverse_iterator<const_iterator>;
    // node_type
    // insert_return_type



public:
    RBTreeSet();
};

#endif // RBTREE_HPP
