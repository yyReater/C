class MyExcepction  
{  
public:   
    MyExcepction(int errorId,string err_info, int err_line,string err_file)  
    {  
        m_errorId = errorId;   // 错误Code,可以是你自己定义的err code
        m_errorLine = err_line;// 发生错误的行号
        m_errorInfo = err_info;// 发生错误的信息
        m_errorFile = err_file;// 错误的文件名
    }  

    MyExcepction( MyExcepction& myExp)   // 拷贝构造函数
    {   
        this->m_errorId = myExp.m_errorId;
        this->m_errorFile = myExp.m_errorFile;
        this->m_errorLine = myExp.m_errorLine;
        this->m_errorInfo = myExp.m_errorInfo;
    }  

    ~MyExcepction()  
    {   
        std::cout << "~MyExcepction is called" << std::endl;  
    }  

    // 打印错误信息，你自己可以DIY，比如可以以写Log的形式记录下来。 
    void PrintErrorInfo()
    {  
        cout << "err file " << m_errorFile << "\n" 
                            << "err line " << m_errorLine << "\n" 
                            << "err code " << m_errorId <<"\n"
                            << "err info " << m_errorInfo << endl;
    }  

private:      
    int m_errorId; 
    int m_errorLine;
    string m_errorInfo;
    string m_errorFile;
};  
