/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextField.h"

@class NSButton, NSProgressIndicator;

@interface IDEDocSearchTextField : NSTextField
{
    NSProgressIndicator *_progressSpinner;
    NSButton *_searchButton;
    NSTextField *_SDKLabel;
}

- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)stopSpinner;
- (void)startSpinner;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)_positionProgressSpinner;
- (void)_positionSearchButton;
- (void)showOptions:(id)arg1;

@end
