#Ruby
class queue
  def initialize # constructor
    @store = Array.new#store data in array
  end

  def dequeue # remove data store
    @store.pop
  end

  def enqueue(string) #store data
    @store.unshift(string)
  end

  def empty #remove list
    @store.clear
  end

end