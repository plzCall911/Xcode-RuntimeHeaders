/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface XDPMImporter : NSObject
{
    NSMutableDictionary *_allClasses;
    NSMutableDictionary *_allEntities;
    NSMutableDictionary *_allPFEntities;
}

+ (id)importMOMAtPath:(id)arg1 intoModel:(id)arg2;
- (void).cxx_destruct;
- (id)importMOM:(id)arg1 intoModel:(id)arg2;
- (id)init;

@end

