module Deck = {
    [@bs.module "spectacle"][@react.component]
    external make: (~theme: Js.t('a), ~children: React.element) => React.element = "Deck";
};

module Slide = {
    [@bs.module "spectacle"][@react.component]
    external make: (~children: React.element) => React.element = "Slide";
};

module Text = {
    [@bs.module "spectacle"][@react.component]
    external make: (~textSize: string, ~children: React.element) => React.element = "Text";
};

module Theme = {
    [@bs.deriving abstract]
    type colors = {
        [@bs.optional] primary: string,
        [@bs.optional] secondary: string,
        [@bs.optional] tertiary: string,
        [@bs.optional] quaternary: string
    };

    [@bs.deriving abstract]
    type fonts = {
        [@bs.optional] primary: string,
        [@bs.optional] secondary: string,
        [@bs.optional] tertiary: string,
    };
    [@bs.module "spectacle"][@bs.scope "themes"][@bs.val]
    external create: (colors, fonts) => Js.t('a) = "defaultTheme";
};

module Heading = {
    [@bs.module "spectacle"][@react.component]
    external make: (~size: int, ~children: React.element) => React.element = "Heading";
};

module List = {
    [@bs.module "spectacle"][@react.component]
    external make: (~children: React.element) => React.element = "List";
};

module ListItem = {
    [@bs.module "spectacle"][@react.component]
    external make: (~textSize: string, ~children: React.element) => React.element = "ListItem";
};

