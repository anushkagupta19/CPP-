// // Given a time in 12-hour AM/PM format, convert it to 24-hour military time.
// Note:12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.12:00:00PM on 
// a 12-hour clock is 12:00:00 on a 24-hour clock.

// // Function Description
// // Complete the timeConversion function. It must return a new string
//  representing the input time in 24-hour format.timeConversion has the following 
//  parameter(s):string s: a time in 12-hour clock format
// // Returns:string: the time in 24-hour format
// // Input FormatA single string s that represents a time in 12-hour clock format 
// (i.e., hh:mm:ssAM or hh:mm:ssPM).Constraints:All input times are valid.
// // Sample Input
// // 7:05:45PM
// // Sample Output
// // 19:05:45
// // Explanation
// // The input time is 7 hours, 5 minutes, and 45 seconds past noon.Because it is PM,
//  you add 12 to the hours (7 + 12 = 19).The minutes and seconds remain exactly the 
//  same.The resulting 24-hour time string is 19:05:45.