class MyHashSet {
    vector<vector<int> *> set;
	const int size = 500;
public:
	/** Initialize your data structure here. */
	MyHashSet() {
		set.resize(size);
	}

	void add(int key) {
		const int index = key % size;
		if (!contains(key))
		{
			auto v = set[index];
			if (v == nullptr)
			{
				v = new vector<int>;
			}
			v->push_back(key);
            set[index] = v;
		}
	}

	void remove(int key) {
		const int index = key % size;
		auto v = set[index];
		if (v == nullptr) return;
		for (auto iter = v->begin(); iter != v->end(); iter++)
		{
			if (*iter == key)
			{
				v->erase(iter);
				return;
			}
		}
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		const int index = key % size;
		const auto v = set[index];
		if (v == nullptr) return false;
		for (auto e : *v)
		{
			if (e == key)
			{
				return true;
			}
		}
		return false;
	}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
