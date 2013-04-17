var quadmath = require("../build/Release/quadmath");

describe("quadmath", function () {
	it("should have a test function", function () {
		expect(quadmath.test()).toEqual("pass");
	});
});
