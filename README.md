What is Prog-2000
-----------------
I've created this github page for "Intro to Micro and C Programming" in hopes of teaching my self how to use github while learning C; also to help fellow students. You can find the <a href="https://github.com/glennlopez/Prog-2000/wiki">Answers to Package Questions here</a>. Practice Midterm Exam will be provided by asking me via email (Free). I don't give out answers, make a group, work together, and find the solution. 

If you're wondering where all this is going to (the stuff you're learning in Prog-200) its to get you ready for this https://www.youtube.com/watch?v=JXBk6Y79Lrg 

<b>Labs for next term available here:</b> https://github.com/glennlopez/MICR-1240

<b>Bonus brownie points:</b>  Why use void main(void) vs int main(void)

Yes, IT IS proper to use void main() in the world of microcontrollers but its bad practice for coding. Typically your main() should look like int main(int argc, const char* argv[]){...}

void main(void) is used becuase microcontrollers don't ever need to "return" anything outside of main. Infact, you're typically going to use a while(1) inside main() to loop your instructions over and over again till you turn off the microcontroller. In the world of software development, exits are generally represented by a 0 return value from main. Any abnormal termination is usually signalled by a non zero return.

In otherwords, there is no point to using int main(arg) in embedded programs but its good practice since most gcc compilers may not accept returning a void from main.



Tabulation Structure
--------------------

<img src="http://i.stack.imgur.com/ji9pn.gif" />

Supplemental Resources
-----------------------------------------------------------

<ul>
	<li><a href="https://zybooks.zyante.com/#/zybook/UTEdXSpring2015/chapter/2/section/1">C Programming Interactive Lesson</a></li>
<li><a href="http://www.learn-c.org/">Online C Programming Tutorial</a></li>
<li><a href="http://www.programiz.com/c-programming/">Documentation on C Programming</a></li>
<li><a href="http://connect.rrc.ca/DEEAM/ELEEF/PROG-2000/default.aspx">Red River College Course Sharepoint</a>
<li><a href="https://www.evernote.com/shard/s4/sh/8fddf4dd-de95-44fa-878f-631e9197d602/6ce49f210a5c494d03052d8ea1c1ccc2">Full Course Package PDF</a></li>
<li><a href="https://www.evernote.com/shard/s4/sh/92c6cad3-1a53-4063-93a9-0a05540914e2/cda1e8bdac6acc616adfbadeb99ace19">Zilog Datasheet</a></li>
<!-- <li>https://www.evernote.com/shard/s4/sh/a7460129-04ed-407b-a0b2-accb499fbed6/6537fe2125bfb18b8af7443a6c86db5b</li> -->
</ul>
