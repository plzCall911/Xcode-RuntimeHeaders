/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSMutableArray, PBXLSDataValue<XCVariableInspectorControl>;

@interface XCVariableInspectorControlView : NSView
{
    PBXLSDataValue<XCVariableInspectorControl> *_target;
    NSMutableArray *_buttonsArray;
    int _lastUsedDisplayStyle;
}

- (void)removeFromSuperview;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (void)unregisterButtons;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2;
- (void)removeButtons;
- (void)updateButtons:(id)arg1;
- (void)configureButtons;

@end
