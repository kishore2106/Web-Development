# Web-Development
The Complete 2024 Web Development Bootcamp

# official website - https://developer.mozilla.org/en-US/docs/Web/HTML/Element/Heading_Elements

# Lesson1 - HTML (Hyper Text Markup Language) 
1. Heading  
2. Paragraph 
3. Void Elements (No Contents between the tags) ex- hr, br
4. List (ul, ol, li)
5. Nesting and Indentation
7. Anchor Elements
8. Image Elements 
9. Birthday invite project with the above learnt elemets
10. Absolute and Relative Path
11. Web Pages
12. HTML Protfolio Project

# Lesson2 - CSS (Cascading Style Sheet)
1. How to add CSS
2. Selectors
    1. Element Selector
    2. Class Selector (.)
    3. ID Selector (#)
    4. Attribute Selector (element[attr])
    5. Universal Selector (*)
3. Colour Vocab Project
4. CSS Colors
5. Font Properties
6. CSS Box Model
7. Motivation Meme Project
8. CSS Properties
    1. Color (https://colorhunt.co/)
    2. Font (size, weight, ) #1px->1/96th inch (0.26mm),1pt->1/72nd inch (0.35mm), 1em (100% of parent) & 1rem (100% of root)
    3. Family (fonts.google.com)
    4. Text Align
    5. Margin
    6. Padding
    7. Border (border-width, border-top)
9. CSS Rules
    1. Position
    2. Specificity (id>attributre>class>element)
    3. Type (inline>internal>external)
    4. Importance (!important)
10. Combining CSS Selectors
    1. Group (selector1, selector2,...)
    2. child (parent_selector>child_selector)
    3. Descendant (selector selector)
    4. Chaining (Apply where ALL selectors are ture)
    5. combining combiners
11. Positioning
    1. Relative
    2. Absolute (Position relative to nearest positioned ancestor or top left corner of webpage) 
    3. Fixed
    4. Static (Default)
12. CSS Flag Project
13. CSS Display
    1. Inline (We can't set the size i.e width & height)
    2. Block (Default)
    3. Inline-Block (We can set width and height)
    4. None (element will disappear)
14. CSS Float
15. Responsiveness
    1. Media Queries
    2. CSS Grid (2D layout)
    3. Flexbox (1D layout)
    4. External framework like Bootstrap
16. Media Query
17. Web Design Agency Project
18. Display Flex
19. Flex Direction
    1. flex-direction (row[default], column)
    2. Main-axis/Cross-axis
    3. flex-basis (height/width based on the main/cross-axis) is set on the child element not on the container itself
20. Flex Layout (cheet-sheet: https://css-tricks.com/snippets/css/a-guide-to-flexbox/)
    1. order
    1. Align (align-items: flex-<start/end/center/base-line/stretch>) used to set cross-axis, height should be set in container eg. height: 70vh(viewport height)
        1. align-self for a single item set in child.
    2. Justify (justify-content: flex-<start/end/center/space-between>) this propery is to the container
    3. Wrap (flex-wrap: nowrap[default]) move all the element that doesnt have space in the same row/column to next column/row
    4. align-content: it works similar to align-items but only when flex-wrap is set to wrap.
21. Flexbox Froggy (https://appbrewery.github.io/flexboxfroggy/)
22. Flexbox sizing
    1. Shrinking (Content width<Width<flex-basis<max-width/min-width) max width having all the content in a line and min width is the largest word in the content.
    2. Growing (default flex-grow:0, flex-shrink:1) shorthand for flex-<grow, shrink, basis> flex: 1 1 0px/flex: 1; (grow, shrink, basis).
23. Flexbox Pricing Table Project
24. CSS Grid
    1. Grid Sizing (short hand for grid-template-rows and gir-template-columns is grid-template: rows / columns) [https://appbrewery.github.io/grid-sizing/]
    2. Grid Item Placement (grid-column/row-start and gird-column/row-end -> grid-column, grid-row)
25. Mondrian Project.
26. BootStrap
    1. Bootstrap Intro (https://getbootstrap.com/)
    2. Bootstrap Layout (12 column layout system)
    3. Bootstrap Component
27. TinDog Project

# Lesson3 - Web Design
1. Introduction to Web Design
2. Web Design Principles
    1. Colour Theory
    2. User Interface Design
    3. Typography
    4. User Experience Design
3. Colour Theory
    1. Moods [(Red-Love,Energy,Intensity)(Yellow-Joy,Intellect,Attention)(Green-Freshness,Safety,Growth)(Blue-Stability,Trust,Serenity)(Purple-Royalty,Wealth,Femininty)]
    2. Combining Colours (https://colorhunt.co/) (https://color.adobe.com/create/color-wheel)
        1. Analogous Colours (adjacent the colour wheel)
        2. Complementary Colours (opp cololurs in the colour wheel) dont use for text and its Bg, best for logos and icons.
4. Typography
    1. Combining
        1. Similar (Mood, Time Era)
        2. Contrast (Serif-ness, Weights) 
5. User Interface Design
    1. Hierarchy (colour, Size)
    2. Layout (40-60 chars per line)
    3. Alignment
    4. White Space
    5. Audience
6. User Experience Design
    1. Design Simple
    2. Consistency
    3. Reading Patterns (Use the F-layout or Z-layout)
    4. All Platform Design
    5. Don't Use Your Powers for Evil (Dark Patterns)

# Lesson4 - JavaScript 
Important links - (https://github.com/rwaldron/idiomatic.js)
1. Data Types
    1. Primitive Data Types (number, string, boolean, null, undefined)
    2. Object Data Types (object, array)
2. Variables
3. Naming Convention
4. String Concatenation
5. String Lengths and Retrieving number of chars
6. Slicing and Extracting Parts of a String
7. Chaining Casing
8. Arithmetic and Modulo Operators
9. Increement and Decreement Operators
10. Functions (parameters and arguments)
11. Random Number Generation
12. Control Statements
13. Comparators and Equality
14. Collections - Arrays
15. Loop - while loop & for loop
16. DOM (Document Object Model)
17. DOM Manipulation
    1. Properties (innerHTML, style, firstChild)
    2. Methods (click(), appendChild(), setAttribiute())

# Lesson5 - jQuery
1. Introduction (CDN)[https://jquery.com/].
2. How to Incorporate ["https://ajax.googleapis.com/ajax/libs/jquery/3.7.1/jquery.min.js"].
3. Minification [https://www.minifier.org/].
4. Selecting Elements with jQuery.
5. Manipulating Styles with jQuery.
6. Manipulating Text with jQuery.
7. Manipulating Attributes with jQuery.
8. Adding Event Listeners with jQuery.
9. Adding and Removing Elements with jQuery [before, after, prepend, append].
10. Websites Animations with jQuery. [https://api.jquery.com/category/effects/]

# Lesson6 - NodeJS
1. Introduction.
2. Installation.
3. Using NodeJS.
4. How to Use the Native Node Modules[https://nodejs.org/docs/latest/api/].
5. The NPM Package Manager and Installing External Node Modules.
6. OR Code Generator.

# Lesson7 - ExpressJS with NodeJS
1. Introduction.
2. Creating Our First Server with Express.
3. Steps to create Express Server.
    1. Create directory.
    2. Create index.js file.
    3. Initialise NPM.
    4. Install the Express Package.
    5. Write Server application in index.js.
    6. Start Server.
4. HTTP Requests.
5. Postman.
6. Introduction to Middleware.
    1. Pre-process. (body-parser)
    2. Logger. (morgan)
    3. Authenticator.
    4. Error Handler.
7. HTTP Response Status Codes [https://developer.mozilla.org/en-US/docs/Web/HTTP/Status].
    1. Informational responses (100-199)
    2. Successful responses (200-299)
    3. Redirection messages (300-399)
    4. Client error responses (400-499)
    5. Server error responses (500-599)
8. Secrets Access Project.

# Lesson8 - Embedded JavaScript
1. Introduction.
2. EJS Tags.
    1. <%= variable  %> -> JS Output
    2. <% console.log("hello") %> -> JS Excecute
    3. <%- <h1>Hello<h1> %> -> Render HTML
    4. <%% %%> Show <% or %> (escape characters)
    5. <%# This is a comment%> -> Stop Excecution
    6. <%- include("header.ejs")%> -> Insert another EJS file
3. Passing Data to EJS Templates.
4. EJS Patials and Layouts.
5. Band Generator Project.

# Lesson9 - Git, Github and Version Control
1. Introduction to Version Control and Git.
2. Version Control Using Git and the Command Line.
3. GitHub and Git Repositories.
4. Gitignore.
5. Cloning.
6. Branching and Merging.
7. Optional Git Challenge. [https://learngitbranching.js.org/]
8. Forking and Pull Requests.

# Lesson10 - Application Programming Interface (API)
1. Introduction to APIs.
2. Structuring API Requests.
3. What is JSON? [JSON-Viewer: https://jsonviewer.stack.hu/]
4. Making Server-Side API Requests with Axios.
5. API Authentication.
6. REST APIs.