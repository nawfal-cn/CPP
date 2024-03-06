template<class T>
Array<T>::Array() : array(nullptr), arrSize(0) {}

template<class T>
Array<T>::~Array()
{
    delete[] array;
}

template<class T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    this->arrSize = n;
}

template<class T>
Array<T>::Array(Array const &copy)
{
    this->array = nullptr;
    *this = copy;
}

template<class T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if(this != &other)
	{
		this->arrSize = other.arrSize;
        if(this->array != nullptr)
            delete[] this->array;
        this->array = new T[arrSize];
        for(unsigned int i = 0; i < arrSize; i++)
            this->array[i] = other.array[i];
	}
	return(*this);
}

template<class T>
T &Array<T>::operator[](unsigned int index) const
{
    if(index >= arrSize)
        throw std::out_of_range("Array index is out of bounds!");
    return(array[index]);
}

template<class T>
unsigned int Array<T>::size() const
{
    return(this->arrSize);
}