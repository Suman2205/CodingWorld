const student={
    name:"Suman",
    rollno:77,
    age:19,
    city:"Delhi"
};
console.log(student);
student.city="Mumbai";
student.gender="Male";
console.log(student);
const post={
    username:"be_genuine_one",
    content:"sketches",
    likes:20,
    reposts:2,
    tags:["@kisna","@paras"]
};
console.log(post);
console.log(student["name"]);
console.log(student.age);
console.log(student["rollno"]);
// const classInfo={
//     suman:{
//         grade:"A+",
//         city:"KKR"
//     },
//     kisna:{
//         grade:"A",
//         city:"Faridabad"
//     },
//     paras:{
//         grade:"A",
//         city:"Delhi"
//     }
// };
// console.log(classInfo.suman.city);
// console.log(classInfo.kisna.city);
// console.log(classInfo.paras.city);
const classInfo=[
    {
        name:"suman",
        city:"Kuruksheta"
    },
    {
        name:"kisna",
        city:"Faridabad"
    },
    {
        name:"paras",
        city:"New Delhi"
    }
];
console.log(classInfo)
console.log(classInfo[0]);
console.log(classInfo[1]);
console.log(classInfo[2]);
console.log(classInfo[0].city);
console.log(classInfo[1].city);
console.log(classInfo[2].city);