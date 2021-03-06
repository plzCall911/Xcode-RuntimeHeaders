/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CSDateTime, NSString;

@interface CSXCWorkScheduleRecurrence : NSObject
{
    NSString *_guid;
    NSString *_scheduleGUID;
    CSDateTime *_startTime;
    NSString *_repeatInterval;
}

+ (void)initialize;
@property(retain) NSString *repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(retain) CSDateTime *startTime; // @synthesize startTime=_startTime;
@property(retain) NSString *scheduleGUID; // @synthesize scheduleGUID=_scheduleGUID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartTime:(id)arg1 andRepeatInterval:(id)arg2;

@end

