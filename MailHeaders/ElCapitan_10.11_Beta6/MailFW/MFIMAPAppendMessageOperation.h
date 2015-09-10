/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFIMAPOperation.h>

@class NSArray, NSDate;

@interface MFIMAPAppendMessageOperation : MFIMAPOperation
{
    unsigned int _uid;
    int _internalDateAsInt;
    unsigned int _size;
    NSArray *_flags;
}

@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) int internalDateAsInt; // @synthesize internalDateAsInt=_internalDateAsInt;
@property(copy, nonatomic) NSArray *flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)lastTemporaryUid;
- (unsigned int)firstTemporaryUid;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (BOOL)isSourceOfTemporaryUid:(unsigned int)arg1;
@property(readonly, nonatomic) NSDate *internalDate;
- (void)serializeIntoData:(id)arg1;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (unsigned long long)approximateSize;
- (unsigned char)operationType;
- (id)initWithAppendedUid:(unsigned int)arg1 approximateSize:(unsigned int)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5;

// Remaining properties
@property(nonatomic) BOOL usesRealUids; // @dynamic usesRealUids;

@end

