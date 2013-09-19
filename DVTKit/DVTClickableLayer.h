/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

#import <DVTKit/DVTClickableLayer-Protocol.h>

@interface DVTClickableLayer : CALayer <DVTClickableLayer>
{
    id _clickHandlerBlock;
    BOOL _disableClickHandler;
    BOOL _showsClickedState;
}

@property BOOL disableClickHandler; // @synthesize disableClickHandler=_disableClickHandler;
@property BOOL showsClickedState; // @synthesize showsClickedState=_showsClickedState;
@property(copy) id clickHandlerBlock; // @synthesize clickHandlerBlock=_clickHandlerBlock;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)fireClickHandler;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;

@end
