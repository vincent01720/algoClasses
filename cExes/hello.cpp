#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Words {
  public:
    Words(vector<string> n){
      list_of_words = n;
    }
  
    string GetString(int i) {
      if (i >= list_of_words.size()) {
        return "No string exists at this index.";
      }
      return list_of_words.at(i);
    }
  
    void SetString(string s, int i) {
      if (i >= list_of_words.size()) {
        cout << "No string exists at this index." << endl;
      }
      list_of_words.at(i) = s;
    }
  
    void CoutStrings() {
       vector<int> vowel_sizes;
       int size;
       for (auto a : list_of_words) {
         size = CountVowels(a, a.length());
         vowel_sizes.push_back(size);
       }
       for (int i = 0; i < vowel_sizes.size(); i++) {
         if (i == vowel_sizes.size()-1) {
           cout << vowel_sizes.at(i) << endl;
         }
         else {
           cout << vowel_sizes.at(i) << ',';
         }
       }
     }
  
  private:
    vector<string> list_of_words;
  
    bool IsVowel(char ch) {
      ch = toupper(ch);
      return (ch=='A' || ch=='E' || ch=='I' ||
              ch=='O' || ch=='U');
    }

    int CountVowels(string str, int n) {
      if (n == 1) {
        return IsVowel(str[n-1]);
      }
      return CountVowels(str, n-1) + IsVowel(str[n-1]);
    }
};

//add class definitions above this line


int main() {
  
  //add code below this line
  
  vector<string> list = {"house", "cake", "pancake"};
  Words words(list);
  cout << words.GetString(0) << endl;
  words.SetString("mouse", 0);
  cout << words.GetString(0) << endl;

  //add code above this line
  
  return 0;
  
}


///////////////////////////////////////////1
#include <iostream>
using namespace std;

//add class definitions below this line
class Fruit{
  public:
    Fruit(string n, string c){
      name = n;
      color = c;
    }
    string GetColor(){return color;}
    string GetName(){return name;}
    void SetName(string n){name = n;}
    void SetColor(string c){color = c;}
  private:
    string name;
    string color;
};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}


///////////////////////////////////////////2
class Watch {
  public:
    Watch(string mf, string mo, int d, int w, string mt) {
      manufacturer = mf;
      model = mo;
      diameter = d;
      water_resistance = w;
      material = mt;
    }
  
    string GetManufacturer() {
      return manufacturer;
    }

    void SetManufacturer(string new_manufacturer) {
      manufacturer = new_manufacturer;
    }

    string GetModel() {
      return model;
    }

    void SetModel(string new_model) {
      model = new_model;
    }

    int GetDiameter() {
      return diameter;
    }

    void SetDiameter(int new_diameter) {
      diameter = new_diameter;
    }

    int GetWaterResistance() {
      return water_resistance;
    }

    void SetWaterResistance(int new_water_resistance) {
      water_resistance = new_water_resistance;
    }

    string GetMaterial() {
      return material;
    }

    void SetMaterial(string new_material) {
      material = new_material;
    }

    void Summary() {
      cout << "Manufacturer: " << manufacturer << endl;
      cout << "Model: " << model << endl;
      cout << "Diameter: " << diameter << " mm" << endl;
      cout << "Water Resistance: " << water_resistance << " m" << endl;
      cout << "Material: " << material << endl;
    }
  
  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};



/////////////////////////////////////////////////3
#include <iostream>
using namespace std;


  //add class definitions below this line
class Song {
  public:
    Song(string art, string ti, string alb){
      artist = art;
      title = ti;
      album = alb;
    }

      string GetAlbum(){return album;}
      string GetArtist(){return artist;}
      string GetTitle(){return title;}
      int GetPlayCount(){return play_count;}
      double GetPayRate(){return pay_rate;}
      double GetMoneyEarned(){return money_earned;}

      void SetAlbum(string alb){album = alb;}
      void SetArtist(string art){artist = art;}
      void SetTitle(string ti){title = ti;}

      void Stats(){
        cout << artist << endl;
        cout << title << endl;
        cout << album << endl;
        cout << play_count << endl;
        cout << pay_rate << endl;
        cout << money_earned << endl;
      }

      void Play(int num){
        for(int i = 0; i<num; i++){
        UpdatePlayCount();
        UpdateMoneyEarned();}
      }


  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE


////////////////////////////////////////////4
#include <iostream>
#include <iomanip>
using namespace std;

//add class definitions below this line
class Atm{
  public:
    Atm(){
    }

    double GetMoney(){ return money;}

    void Deposit(double mon){
      if(mon > 0){money = money + mon;}
      else{cout << "You cannot deposit a negative or 0 amount of money." << endl;}
    }

    void Withdraw(double withd){
      if(withd <= 0){cout << "You cannot withdraw a negative or 0 amount of money." << endl;}
      else{
        if (money >= withd){money = money - withd;}
        else{cout << "You do not have enough funds to withdraw that amount." << endl;}
      }
    }

  private:
  double money;
};



//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed; //prevents value from being truncated or rounded
  cout << setprecision(2); //sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}




////////////////////////////////////////////5
class CardBinder {
  public:
    CardBinder() {}
  
    int GetGold() {
      return gold_card;
    }
  
    int GetSilver() {
      return silver_card;
    }
  
    int GetTotal() {
      return gold_card + silver_card;
    }
  
    void AddGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card + silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        gold_card += amount;
      }
    }
  
    void RemoveGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (gold_card - amount < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      }
      else {
        gold_card -= amount;
      }
    }
  
    void AddSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card +silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        silver_card += amount;
      }
    }
  
    void RemoveSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (silver_card - amount < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      }
      else {
        silver_card -= amount;
      }
    }
  
  private:
    int gold_card = 0;
    int silver_card = 0;
};