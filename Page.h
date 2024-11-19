class Page
{
private:

    std::string _Status_;
    std::string _Posts_;

public:
    void init();

    void clearPage();
    void setStatus(std::string status);
    void addLineToPosts(std::string new_line);

    std::string getPosts() const;
    std::string getStatus() const;

};