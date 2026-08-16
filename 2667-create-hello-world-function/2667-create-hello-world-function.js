/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        let a="Hello World";
        return a;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */