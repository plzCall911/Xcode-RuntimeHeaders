/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEDevkitRefactoring/DevkitExpression.h>

@class DevkitIdentifierExpression;

@interface DevkitMemberExpression : DevkitExpression
{
    DevkitIdentifierExpression *_fieldIdent;
    BOOL _isPointer;
}

- (void).cxx_destruct;
- (id)shortDescription;
- (id)prettyPrint;
- (void)setIsPointer:(BOOL)arg1;
- (BOOL)isPointer;
- (id)expressionContainingLocation:(id)arg1;
- (id)fieldIdentifier;
- (void)setFieldIdentifier:(id)arg1;
- (id)overallChildren;
- (void)cleanup;
- (id)init;

@end

