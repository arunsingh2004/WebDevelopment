import {Computer} from'./1computer.js'
class Macbook extends Computer{
      constructor(name,company){
      super(name)
      this.company=company
      }
      logIn(){
            console.log("You are logged a Mackbook " + this.name)
      }
}
const mackbook_air=new_Macbook('Air', 'Apple');
mackbook_air.logIn()
mackbook_air.run()