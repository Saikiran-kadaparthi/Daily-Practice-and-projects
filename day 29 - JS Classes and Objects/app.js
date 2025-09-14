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

