class Animal public members:
Animal();
 Animal(std::string name, bool domestic = false, bool predator = false);
std::string getName() const;
 bool isDomestic() const;
 bool isPredator() const;
 void setName(std::string name);
 void setDomestic();
 void setPredator();

class Animal private members: std::string name_;
bool domestic_;
bool predator_; 
