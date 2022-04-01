#include <iostream>
using namespace std;

//add class definitions below this line

//add class definitions below this line

class Line {
  public:
    Line(int l) {
      length = l;
    }
  
    int GetLength() {
      return length;
    }
  
    void DrawLine() {
      for (int i = 0; i < length; i++) {
        cout << '*';
      }
      cout << endl;
    }
  
  private:
    int length;
};

class Box : public Line {
  public:
    Box(int l, int w) : Line(l) {
      width = w;
    }
  
    int GetWidth() {
      return width;
    }
  
    void DrawBox() {
      for (int i = 0; i < width; i++) {
        DrawLine();
      }
    }
  
  private:
    int width;
};

class Pattern : public Box {
  public:
    Pattern(int l, int w) : Box(l, w) {} 
  
    void DrawPattern() {
      for (int i = 0; i < GetLength(); i++) {
        if (i % 2 == 0) {
          for (int j = 0; j < GetWidth(); j++) {
            if ( (j % 2 == 0) ) {
              cout << '*';
            }
            else {
              cout << ' ';
            }
          }
          cout << endl;
        }
        if (i % 2 == 1) {
          for (int j = 0; j < GetWidth(); j++) {
            if ( (j % 2 == 0) ) {
              cout << ' ';
            }
            else {
              cout << '*';
            }
          }
          cout << endl;
        }
      }
    }
};

//add class definitions above this line

int main() {
  
  //add code below this line
  Pattern pattern(10, 10);
  pattern.DrawPattern();


  //add code above this line
  
  return 0;
  
}









//////////////////////////////////////1

#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class CelestialBody {
  public:
    CelestialBody(double s, double m, string c, string n) {
      size = s;
      mass = m;
      atm_composition = c;
      name = n;
    }

    double GetSize() {
      return size;
    }

    double GetMass() {
      return mass;
    }

    string GetComposition() {
      return atm_composition;
    }

    string GetName() {
      return name;
    }
  
  private:
    double size;
    double mass;
    string atm_composition;
    string name;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT//////////////////////////////
class Satellite : public CelestialBody { //
///////////////////////////////////////////
  public:
    Satellite(double s, double m, string c, string n, string hostp) : CelestialBody(s, m, c, n){
      host_planet = hostp;
    }

  string GetHostPlanet(){return host_planet;}

  private:
  string host_planet;
};
  
  
  

//DO NOT EDIT///////////////////////////
class Planet : public CelestialBody { //
////////////////////////////////////////
  public:
    Planet(double s, double m, string c, string n, string hosts): CelestialBody(s, m, c, n){
      host_star = hosts;
    }

    string GetHostStar(){return host_star;}

  private:
    string host_star;
};
  
  
  

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Satellite s(2651, 3716, "helium", "Moon", "Earth");
  Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
  Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
  Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
  cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
  cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
  cout << ", host planet = " << s.GetHostPlanet() << endl;
  cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
  cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
  cout << ", host star = " << p.GetHostStar() << endl;
  cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
  cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
  cout << ", host planet = " << s2.GetHostPlanet() << endl;
  cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
  cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
  cout << ", host star = " << p2.GetHostStar() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}






///////////////////////////////////////2
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Book {
  public:
    Book(string t, string a, string g) {
      title = t;
      author = a;
      genre = g;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    string GetAuthor() {
      return author;
    }

    void SetAuthor(string new_author) {
      author = new_author;
    }

    string GetGenre() {
      return genre;
    }
  
    void SetGenre(string new_genre) {
      genre = new_genre;
    }
  
  private: 
    string title;
    string author;
    string genre;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT////////////////////
class BlogPost : public Book { //
/////////////////////////////////
  public:
    BlogPost(string t, string a, string g, string web, int count, int page):Book(t, a, g){
      website = web;
      word_count = count;
      page_views = page;
    }

    string GetWebsite(){return website;}
    int GetWordCount(){return word_count;}
    int GetPageViews(){return page_views;}

  private:
    string website;
    int word_count;
    int page_views;

};
  
  

  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  BlogPost my_post("Hot Summer Trends", "Amy Gutierrez", "fashion", "Vogue", 2319, 2748);
  cout << my_post.GetTitle() << endl;
  cout << my_post.GetAuthor() << endl;
  cout << my_post.GetGenre() << endl;
  cout << my_post.GetWebsite() << endl;
  cout << my_post.GetWordCount() << endl;
  cout << my_post.GetPageViews() << endl;
  BlogPost codio("Adopting Codio", "Anh Le", "computer science", "Codio", 2500, 5678);
  cout << codio.GetTitle() << endl;
  cout << codio.GetAuthor() << endl;
  cout << codio.GetGenre() << endl;
  cout << codio.GetWebsite() << endl;
  cout << codio.GetWordCount() << endl;
  cout << codio.GetPageViews() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}






///////////////////////////////////////3
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent1";
    }
};

class Parent2 : public Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent2";
    }
};

//DO NOT EDIT code above this line

//add class definitions below this line
class Child: public Parent2{
  public:
    Child():Parent2(){
    }
    string Identify(){return "This function is called from Child";}
    string Identify2(){return Parent2::Identify();}
    string Identify3(){return Parent1::Identify();}
};


//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Child c;
  cout << c.Identify() << endl;
  cout << c.Identify2() << endl;
  cout << c.Identify3() << endl;
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}






///////////////////////////////////////////4
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class PiggyBank {
  public:
    PiggyBank(int o, int f, int tn, int tw) {
      ones = o;
      fives = f;
      tens = tn;
      twenties = tw;
    }
  
    int GetOnes() {
      return ones;
    }
  
    void SetOnes(int new_ones) {
      ones = new_ones;
    }
  
    int GetFives() {
      return fives;
    }
  
    void SetFives(int new_fives) {
      fives = new_fives;
    }
  
    int GetTens() {
      return tens;
    }
  
    void SetTens(int new_tens) {
      tens = new_tens;
    }
  
    int GetTwenties() {
      return twenties;
    }
  
    void SetTwenties(int new_twenties) {
      twenties = new_twenties;
    }
  
  private:
    int ones;
    int fives;
    int tens;
    int twenties;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////
class Cash : public PiggyBank { //
//////////////////////////////////
  public:
    Cash(int o, int f, int tn, int tw):PiggyBank(o, f, tn, tw){
    }

  void DisplayBills(){
    cout << "One-dollar bill: " << GetOnes() << endl;
    cout << "Five-dollar bill: " << GetFives() << endl;
    cout << "Ten-dollar bill: " << GetTens() << endl;
    cout << "Twenty-dollar bill: " << GetTwenties() << endl;
  }

  void DisplayCashTotal(){
    int total = 1*GetOnes() + 5*GetFives() + 10*GetTens() + 20*GetTwenties();
    cout << "Total amount: "<< total << endl;
  }

};

  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Cash c(1, 2, 3, 4);
  c.DisplayBills();
  c.DisplayCashTotal();
  Cash c2(9, 8, 7, 6);
  c2.DisplayBills();
  c2.DisplayCashTotal();

  //DO NOT EDIT code above this line
  
  return 0;
  
}






///////////////////////////////////5
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
  public:
    Person(string n, string a) {
      name = n;
      address = a;
    }
  
    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      name = new_name;
    }

    string GetAddress() {
      return address;
    }

    void SetAddress(string new_address) {
      address = new_address;
    }

    string Info() {
      return name + " lives at " + address + ".\n";
    }
  
  private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////

    double GetBalance(){return balance;}
    void SetBalance(double bal){balance = bal;}

    double GetAccount(){return account_number;}
    void SetAccount(int acc){account_number = acc;}

    double GetCreditlimit(){return credit_limit;}
    void SetCreditlimit(int credit){credit_limit = credit;}

    double Sale(double s){
      balance += s;
      return balance;
    }

    double Payment(double p){
      balance -= p;
      return balance;
    }

  private:
    int account_number;
    double balance;
    int credit_limit;

};


  
  
//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

  double GetCash_back(){return cash_back;}

  void SetCash_back(double cash){cash_back = cash;}

  int GetRewards(){return rewards;}

  void SetRewards(int rew){rewards = rew;}

  double Sale(double p){
    rewards = p*cash_back + rewards;
    CardHolder::SetBalance(GetBalance()+p);
    return rewards;
  }

  private:
    double cash_back;
    int rewards;
};

  
  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  PlatinumClient pc("Sarah", "101 Main Street", 123364);
  pc.CardHolder::Sale(100);
  cout << pc.GetRewards() << endl;
  pc.Sale(100);
  cout << pc.GetRewards() << endl;
  cout << pc.GetBalance() << endl;
  pc.Payment(50);
  cout << pc.GetBalance() << endl;
  cout << pc.Info() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}