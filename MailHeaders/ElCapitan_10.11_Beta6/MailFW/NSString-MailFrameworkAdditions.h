/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (MailFrameworkAdditions)
+ (id)stringWithAttachmentCharacter;
+ (id)stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (BOOL)isEqualExceptForFinalSlash:(id)arg1;
@property(readonly, copy, nonatomic) NSString *validURLString;
- (BOOL)hasPrefixIgnoreCaseAndDiacritics:(id)arg1;
@property(readonly, copy, nonatomic) NSString *firstLine;
- (id)uniqueFilenameWithRespectToFilenames:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encodedMessageIDString;
@property(readonly, copy, nonatomic) NSString *foldedStringForSuggestionsOriginatedExactMatchSearches;
@property(readonly, copy, nonatomic) NSString *fileSystemString;
@property(readonly, nonatomic) BOOL containsOnlyWhitespace;
- (id)stringByReplacingSpecialSlashesWith:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringByReplacingSpecialSlashesWithSlashes;
@property(readonly, copy, nonatomic) NSString *stringByReplacingSlashesWithSpecialSlashes;
- (id)specialSlash;
@property(readonly, copy, nonatomic) NSString *stringByRemovingLineEndingsForHTML;
@property(readonly, copy, nonatomic) NSString *stringByChangingBodyTagToDiv;
@end

