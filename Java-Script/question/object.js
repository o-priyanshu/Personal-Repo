/* 
    computed properties
    const key1 = "objkey1";
    const key2 = "objkey2";

    const value1 = "myvalue1";
    const value2 = "myvalue2";

    answer it like this 

    const obj{
    key1 : "myvalue1"
    }
    */
console.log("hello");
    const key1 = "key12";
    const key2 = "key22";

    const value1 = "myvalue1";
    const value2 = "myvalue2";

    // const obj1={
    //                 key10 : "myvalue0"
    //     }
    
    //     obj1[key1]=value1;
    //     obj1[key2]=value2;  2- method
    //     console.log(obj1);  // you can do it like this  

        const obj1={
            key10 : "myvalue0",
            [key1] : value1, // this is computed properties 1 - method
            [key2] : value2
}

console.log(obj1);
