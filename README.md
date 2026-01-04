# Dishonored Prototype

## Ability Manager Component
![Ability Manager Component](Dishonored/Gifs/AbilityWheelGif.gif)
Theres a manager that handles a lot of the logic so you dont need to worry about annoying stuff when creating more abilities. UI, gamestate and edge case handling stuff is done here.

## Blink
![Blink](Dishonored/Gifs/BlinkGif.gif)
Its important to note that the blink **is not a teleport**. The blink makes you traverse very quickly from one location to another, this means that it is impossible to: blink through a tiny hole, blink through geometry or blink through a wall of light (dishonored thing). To keep the feel of the blink customisable the traversal and FOV of the blink is handled using a timeline. To stop any clipping into geometry the inital trace is a spherical sweep - this handles any case where the player could blink through a little gap when using a line trace - some more tangent math used alongside the player bounding box ensures the blink location is sound. 

## Dark Vision
![Dark Vision](Dishonored/Gifs/DarkVisionGif.gif)
Just the usually x ray stuff. Custom depth pass allows certain objects ot be viewed over others. Colour of outline changes depending on the enumerator set in a dark vision highlight component, lots of fiddling with shader settings to get that dishonored look - think it came out alright.

## Possesion
![Possesion](Dishonored/Gifs/PossesionGif.gif)
Simple line trace for characters determines who the player is going to posses. Camera blends into the possesed characters camera and the pawns is possesed. When dispossesing a stumble animation plays with a notify state to change the character to ragdoll physics mid way through the animation.

## Windblast
![Windblast](Dishonored/Gifs/WindblastGif.gif)
Box trace gets all physics objects in a cuboid in front of the player. An impulse is then applied to all abject in the vector direction from the player to the object. However, if a skeletal mesh is hit ragdoll physics is applied and then the impulse is added.

## Timebend
![Timebend](Dishonored/Gifs/TimeBendGif.gif)
Just lerps the global time dilation to slow everything but the player. Camera saturation is also lerped towards 0 giving the black and white look. Some handling of ability wheel was needed as that too affects dilation.
