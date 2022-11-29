Container Adapters

Container adapters are a special type of container class. They are not full container classes on their own, but wrappers around other container types (such as a vector, deque, or list). These container adapters encapsulate the underlying container type and limit the user interfaces accordingly.

Let’s consider std::stack. std::stack is a container that enforces a LIFO-type data structure. Here’s the declaration of std::stack:

template<
    class T,
    class Container = std::deque<T>
> class stack;

C++

Notice that Container defaults to wrapping a std::deque<T>. You can actually change the type of underlying container to another STL SequenceContainer or your own custom container. The container you specify has to meet the following requirements:

    The container must satisfy the requirements of a SequenceContainer
    Must provide back(), push_back(), and pop_back() interfaces

The STL containers std::vector, std::deque, and std::list all meet these requirements and can be used for underlying storage.

The standard container adapters are:

    stack provides an LIFO data structure
    queue provides a FIFO data structure
    priority_queue provides a priority queue, which allows for constant-time lookup of the largest element (by default)




Queue

queue can be implemented on top of deque or list.

    The default is deque.

Additional operations:

    front()
    back()
    push(val)
    pop()

    heb jij alle member functions van stack in

    (constructor)
    Construct stack (public member function)

    empty
    Test whether container is empty (public member function)

    size
    Return size (public member function)

    top
    Access next element (public member function)

    push
    Insert element (public member function)

    emplace
    Construct and insert element (public member function)

    pop
    Remove top element (public member function)

    swap
    Swap contents (public member function)




    STL:

    	https://www.learncpp.com/cpp-tutorial/the-standard-template-library-stl/

    	What are all the containers?

    		https://www.cplusplus.com/reference/stl/

    	What exactly does the STL provide?

    		https://www.cplusplus.com/reference/stl/
    		https://www.cplusplus.com/reference/algorithm/
    		https://www.cplusplus.com/reference/iterator/


