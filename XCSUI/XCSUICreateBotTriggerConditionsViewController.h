/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSString, XCSTrigger;

@interface XCSUICreateBotTriggerConditionsViewController : NSViewController
{
    XCSTrigger *_trigger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionLabel;
@property(nonatomic) BOOL onInternalErrors;
@property(nonatomic) BOOL onBuildErrors;
@property(nonatomic) BOOL onFailingTests;
@property(nonatomic) long long onSuccess;
@property(retain, nonatomic) XCSTrigger *trigger;

@end
