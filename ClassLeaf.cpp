

class Folder : public IComposable
{
    private:
		//std::string m_nodeName;
		//std::vector<IComposable*> m_children;

    public:
		Folder(std::string nodeName)
        {
            m_nodeName = nodeName;
		}

		virtual ~Folder(){}

		void list(int depth)//operation
        {
		  //  std::string newStr(depth, '-');
		  //  std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
		  //	for(std::vector<IComposable*>::const_iterator it = m_children.begin(); it != m_children.end(); ++it)
		  //  {
		  //      if(*it != 0)
		  //		{
		  //			(*it)->show(depth + 1);
		  //      }
		  //  }
        }

		void add(IComposable* component)
        {
		   // m_children.push_back(component);
		}

		void remove(IComposable* component)
		{
		   // m_children.erase(std::remove(m_children.begin(), m_children.end(), component), m_children.end());
		}

		IComposable* getChild(int key)
		{
           // return m_children[key];
        }
};
