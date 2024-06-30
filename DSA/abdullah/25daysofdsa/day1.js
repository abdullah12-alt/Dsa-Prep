// function sortedSquarredArray(array){
//     if(array.length === 0){
//       return []
//     }
//     for (let i =0;i<array.length;i++){
//       array[i]=array[i]*array[i];
//     }
//     return array.sort((a,b)=>a-b);
   
//  }
//  let array=[-10,-5,1,2,3,4,5,6,7,8,9,10]
//  console.log(sortedSquarredArray(array))


// # Question 2: Monotonic Array - An array is monotonic if it is either monotone increasing or monotone decreasing. An array is monotone increasing if all its elements from left to right are non-decreasing. An array is monotone decreasing if all  its elements from left to right are non-increasing. Given an integer array return true if the given array is monotonic, or false otherwise.

const checkMonotonic = function (array){
    let is_decreasing=true
    let is_increasing=true
    if( array.length==0 || array.length==1){
        return true
    }
    for (let i =0;i<array.length-1;i++){
        if (array[i]>array[i+1]){
            is_increasing=false

        }
        if (array[i]<array[i+1]){
            is_decreasing=false

        }
    }
    return is_decreasing || is_increasing
    
}

console.log(checkMonotonic([1,2,4]))


const checkMonotonic = function(array) {
    let is_decreasing = true;
    let is_increasing = true;
    
    if (array.length === 1 || array.length === 0) {
        return true;
    }
    
    for (let i = 0; i < array.length - 1; i++) {
        if (array[i] > array[i + 1]) {
            is_increasing = false;
        }
        if (array[i] < array[i + 1]) {
            is_decreasing = false;
        }
    }
    
    return is_decreasing || is_increasing;
}