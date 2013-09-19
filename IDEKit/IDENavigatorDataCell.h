/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTImageAndTextCell.h"

@interface IDENavigatorDataCell : DVTImageAndTextCell
{
    BOOL _usesGroupHeaderStyle;
    struct CGRect _cellFrameForTracking;
}

+ (void)initialize;
@property(nonatomic) BOOL usesGroupHeaderStyle; // @synthesize usesGroupHeaderStyle=_usesGroupHeaderStyle;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)_mouseEnteredOrExited:(BOOL)arg1 event:(id)arg2;
- (void)addTrackingAreasForView:(id)arg1 inFrame:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (void)_iterateStatusCellsRectsInControlView:(id)arg1 inFrame:(struct CGRect)arg2 withCallback:(id)arg3;
- (id)titleDropShadow;
- (id)subtitleFont;
- (void)setFont:(id)arg1;
- (struct CGRect)dvt_frameOfOutlineCellForBounds:(struct CGRect)arg1 proposedFrame:(struct CGRect)arg2;
- (void)setBaseImageSize:(struct CGSize)arg1;
- (void)_setBaseImageSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

@end
