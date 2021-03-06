/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class IBLayoutConstraint;

@interface IBSystemLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    IBLayoutConstraint *_layoutConstraintBetweenViewsInDocument;
}

@property(retain, nonatomic) IBLayoutConstraint *layoutConstraintBetweenViewsInDocument; // @synthesize layoutConstraintBetweenViewsInDocument=_layoutConstraintBetweenViewsInDocument;
- (void).cxx_destruct;
- (double)priority;
- (id)makeRepresentingConstraintWithLayoutInfo:(id)arg1;
- (id)constraintInDocument;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(id)arg1;
- (id)description;
- (id)initWithLayoutConstraintBetweenViewsInDocument:(id)arg1;

@end

