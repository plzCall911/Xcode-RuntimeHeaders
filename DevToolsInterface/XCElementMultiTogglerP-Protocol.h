/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCElementP-Protocol.h"

@protocol XCElementMultiTogglerP <XCElementP>
- (BOOL)adjustPreviousWhenToggling;
- (void)setAdjustPreviousWhenToggling:(BOOL)arg1;
- (void)reflectObservedToggleState;
- (void)receiveObservedValue:(id)arg1;
- (BOOL)positionOnUpdate;
- (void)setPositionOnUpdate:(BOOL)arg1;
- (void)configureAndSetSourceActivity:(id)arg1;
- (id)sourceActivity;
- (void)setSourceActivity:(id)arg1;
- (void)observeToggleSource:(id)arg1 keyPath:(id)arg2;
- (id)toggleValue;
- (void)setToggleValue:(id)arg1;
- (void)anticipateElementForAllToggleValues;
- (void)anticipateElementForToggleValue:(id)arg1;
@end
