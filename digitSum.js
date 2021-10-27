const m = 5465767;
const n = 4;
const digitSumUpto = (m, n) => {
   if(n > String(m).length){
      return 0;
   };
   let sum = 0;
   for(let i = 0; i < n; i++){
      const el = +String(m)[i];
      sum += el;
   };
   return sum;
};
console.log(digitSumUpto(m, n));
