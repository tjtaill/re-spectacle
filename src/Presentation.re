open ReSpectacle;

let rs = React.string;

let colorConfig = Theme.colors(~primary="white", ~quaternary="black", ());
let fontConfig = Theme.fonts();
let theme = Theme.create(colorConfig, fontConfig);

[@react.component]
let make = (_) => {
    <Deck theme>
        <Slide>
            <SyntaxHighlighter language="reason">
                {rs({js|let foo = "foo";|js})}
            </SyntaxHighlighter>
        </Slide>
    </Deck>
};