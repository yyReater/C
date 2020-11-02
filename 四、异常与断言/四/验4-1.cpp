class MyExcepction  
{  
public:   
    MyExcepction(int errorId,string err_info, int err_line,string err_file)  
    {  
        m_errorId = errorId;   // ����Code,���������Լ������err code
        m_errorLine = err_line;// ����������к�
        m_errorInfo = err_info;// �����������Ϣ
        m_errorFile = err_file;// ������ļ���
    }  

    MyExcepction( MyExcepction& myExp)   // �������캯��
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

    // ��ӡ������Ϣ�����Լ�����DIY�����������дLog����ʽ��¼������ 
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
