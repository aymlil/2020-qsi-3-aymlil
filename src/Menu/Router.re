[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();
  switch (url.path) {
  | ["random"] => <FetchRandomDog/>
  | ["greeting"] => <Greeting/>
  | ["blinkingGreeting"] => <BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>
  | ["dogPicture"] => <FetchedDogPictures/>
  | _ => <div> {React.string("Erreur 404")}</div>
  };
};