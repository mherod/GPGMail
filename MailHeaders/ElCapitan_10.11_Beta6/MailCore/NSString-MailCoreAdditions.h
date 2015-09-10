/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSString.h"

@class NSData;

@interface NSString (MailCoreAdditions)
+ (id)contentIDStringFromCidUrl:(id)arg1;
+ (id)messageIDStringWithDomainHint:(id)arg1;
+ (id)newURLForContentID:(id)arg1 percentEscaped:(BOOL)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByReplacingNonBreakingSpacesWithString:(id)arg1;
@property(readonly, nonatomic) unsigned long long effectivePrefixLength;
@property(readonly, copy, nonatomic) NSData *MD5Digest;
@property(readonly, copy, nonatomic) NSString *messageIDSubstring;
@property(readonly, copy, nonatomic) NSData *encodedMessageID;
@property(readonly, nonatomic) BOOL isCalendarInvitation;
- (id)newStringByApplyingBodyClassName:(id)arg1;
- (id)stringByApplyingBodyClassName:(id)arg1;
- (id)stringByReplacingString:(id)arg1 withString:(id)arg2;
- (long long)caseInsensitiveCompareExcludingXDash:(id)arg1;
- (BOOL)isEqualToStringIgnoringCase:(id)arg1;
- (BOOL)isEqualToStringIgnoreCaseAndDiacritics:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringWithNoExtraSpaces;
@property(readonly, copy, nonatomic) NSString *stringSuitableForHTML;
@property(readonly, copy, nonatomic) NSString *stringByLocalizingReOrFwdPrefix;
@end

