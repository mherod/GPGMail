/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MCURLMatch : NSObject
{
    NSString *_url;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;

@end

