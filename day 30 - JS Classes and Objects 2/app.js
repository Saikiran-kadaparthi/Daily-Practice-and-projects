class Car {
  constructor(make, model, year) {
    this.make = make;
    this.model = model;
    this.year = year;
  }

  displayInfo() {
    console.log(`${this.year} ${this.make} ${this.model}`);
  }
}

let myCar = new Car("Honda", "Civic", 2022);



class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  displayInfo() {
    console.log(`Name: ${this.name}, Age: ${this.age}`);
  }

  celebrateBirthday() {
    this.age += 1;
    console.log(`Happy Birthday, ${this.name}! You are now ${this.age} years old.`);
  }
}

const person1 = new Person("Alice", 30);



class rectangle {

  constructor(width, height) {
    this.width = width;
    this.height = height;
  }

  getarea() {
    return this.width * this.height;
  }

  getperimeter() {
    return 2 * (this.width + this.height);
  }
}
const rectangle1 = new rectangle(10, 5);
console.log("area:", rectangle1.getarea());
console.log("perimeter:", rectangle1.getperimeter());



class Bankaccount {
  constructor(accountNumber, balance = 0) {
    this.accountNumber = accountNumber;
    this.balance = balance;
  }

  deposit(amount) {
    if (amount > 0) {
      this.balance += amount;
    }
  }

  withdraw(amount) {
    if (amount > 0 && amount <= this.balance) {
      this.balance -= amount;
    } else {
      console.log("insufficient balance");
    }
  }

  getbalance() {
    return this.balance;
  }
}


const acc = new Bankaccount("1234567890", 1000);
acc.deposit(500);
acc.withdraw(300);
console.log("Balance:", acc.getbalance());
acc.withdraw(1500);
