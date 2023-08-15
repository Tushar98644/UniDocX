# Maps

 Map creates a new copy of the original array. We use it when we want to do something with the original array's elements but don't want to change it. map iterates over the original array and takes a callback function as an argument. In the callback function, we tell it what to do with the elements.

#### Eg - array = [1,2,3,4,5]

 const copy = `array.map(function(item){ return item })` <br>
 const copy =  `array.map((item)=>{ return item })`

 console.log(d) --> `[1,2,3,4,5]`

# Filter

filter creates a new array with elements that meet the given condition(s).

#### Eg - const words = ['react', 'script', 'interview', 'style', 'javascript']

 const filterlist = `words.filter((word)=>word.length>6)`

 console.log(filterlist) --> `['interview' ,'javascript']`



