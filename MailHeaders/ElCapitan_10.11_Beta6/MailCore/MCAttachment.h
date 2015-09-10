/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLSessionDownloadDelegate.h"

@class MCMimeBody, MCMimePart, NSArray, NSBlockOperation, NSData, NSDate, NSDictionary, NSError, NSFileWrapper, NSImage, NSNumber, NSPort, NSProgress, NSString, NSURL, StationeryCompositeImage;

@interface MCAttachment : NSObject <NSURLSessionDownloadDelegate>
{
    unsigned long long _approximateSize;
    NSImage *_iconImage;
    MCMimePart *_mimePart;
    id _currentDataLock;
    NSData *_currentData;
    NSData *_originalData;
    id _archiveFileWrapperLock;
    BOOL _isMailDropImageThumbnail;
    BOOL _isAutoArchiveAttachment;
    BOOL _hasResourceForkData;
    BOOL _isCalendarInvitation;
    BOOL _isUnreferencedAttachment;
    BOOL _shouldHideExtension;
    BOOL _isMailDropImageArchive;
    BOOL _isMailDropIndividualImage;
    unsigned short _finderFlags;
    unsigned int _creator;
    unsigned int _type;
    NSString *_contentID;
    NSProgress *_downloadProgress;
    NSString *_extension;
    NSURL *_remoteURL;
    NSNumber *_filePermissions;
    NSBlockOperation *_fileReadingOperation;
    NSNumber *_fileSize;
    NSFileWrapper *_fileWrapper;
    NSString *_filename;
    NSString *_filenameForSaving;
    long long _imageByteCountFromHeaders;
    NSString *_mailSpecialHandlingType;
    NSString *_messageID;
    MCMimeBody *_mimeBody;
    NSString *_mimeType;
    NSString *_originalFilename;
    NSDictionary *_quarantineProperties;
    NSString *_savedPath;
    StationeryCompositeImage *_stationeryCompositeImage;
    NSArray *_whereFroms;
    NSDate *_dateSent;
    NSDate *_dateReceived;
    NSString *_cloudKitRecordName;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpiration;
    NSURL *_downloadDirectory;
    NSPort *_downloadPort;
    NSError *_downloadError;
    struct CGSize _imageSizeFromHeaders;
    struct CGSize _resizedImageSize;
}

+ (id)_backgroundFileReadingQueue;
+ (BOOL)automaticallyNotifiesObserversOfOriginalData;
@property(nonatomic) BOOL isMailDropIndividualImage; // @synthesize isMailDropIndividualImage=_isMailDropIndividualImage;
@property(nonatomic) struct CGSize resizedImageSize; // @synthesize resizedImageSize=_resizedImageSize;
@property(nonatomic) BOOL isMailDropImageArchive; // @synthesize isMailDropImageArchive=_isMailDropImageArchive;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) NSPort *downloadPort; // @synthesize downloadPort=_downloadPort;
@property(retain, nonatomic) NSURL *downloadDirectory; // @synthesize downloadDirectory=_downloadDirectory;
@property(retain, nonatomic) NSDate *downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *cloudKitRecordName; // @synthesize cloudKitRecordName=_cloudKitRecordName;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy, nonatomic) NSArray *whereFroms; // @synthesize whereFroms=_whereFroms;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) StationeryCompositeImage *stationeryCompositeImage; // @synthesize stationeryCompositeImage=_stationeryCompositeImage;
@property(nonatomic) BOOL shouldHideExtension; // @synthesize shouldHideExtension=_shouldHideExtension;
@property(copy, nonatomic) NSString *savedPath; // @synthesize savedPath=_savedPath;
@property(copy, nonatomic) NSDictionary *quarantineProperties; // @synthesize quarantineProperties=_quarantineProperties;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) MCMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *mailSpecialHandlingType; // @synthesize mailSpecialHandlingType=_mailSpecialHandlingType;
@property(nonatomic) BOOL isUnreferencedAttachment; // @synthesize isUnreferencedAttachment=_isUnreferencedAttachment;
@property(nonatomic) BOOL isCalendarInvitation; // @synthesize isCalendarInvitation=_isCalendarInvitation;
@property(nonatomic) struct CGSize imageSizeFromHeaders; // @synthesize imageSizeFromHeaders=_imageSizeFromHeaders;
@property(nonatomic) long long imageByteCountFromHeaders; // @synthesize imageByteCountFromHeaders=_imageByteCountFromHeaders;
@property(nonatomic) BOOL hasResourceForkData; // @synthesize hasResourceForkData=_hasResourceForkData;
@property(nonatomic) unsigned short finderFlags; // @synthesize finderFlags=_finderFlags;
@property(retain, nonatomic) NSString *filenameForSaving; // @synthesize filenameForSaving=_filenameForSaving;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSBlockOperation *fileReadingOperation; // @synthesize fileReadingOperation=_fileReadingOperation;
@property(retain, nonatomic) NSNumber *filePermissions; // @synthesize filePermissions=_filePermissions;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned int creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
- (void)_finishedCoordinatedFileReadingWithURL:(id)arg1;
@property(readonly, nonatomic) BOOL hasPendingBackgroundRead;
- (id)beginBackgroundFileReading;
- (BOOL)getCompressedData:(id *)arg1 compressedFileURL:(id *)arg2 archiveType:(long long *)arg3 error:(id *)arg4;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *symbolicLinkDestinationForFileWrapper;
- (id)createTemporaryFile;
- (BOOL)createEmptyAttachmentAtPath:(id)arg1;
- (void)_setupFileWrapper:(id)arg1;
- (id)_freshFileWrapper;
- (void)_downloadRemoteAttachment;
- (id)fileWrapperForFetchLevel:(long long)arg1;
- (id)appleDoubleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;
- (id)appleSingleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL couldConfuseWindowsClients;
- (void)takeNewDataFromPath:(id)arg1;
@property(nonatomic) BOOL isPartOfStationery;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isRemotelyAccessed;
- (id)_dataWithCleanedImageMetadata;
- (BOOL)_hasPrivateImageMetadata;
- (id)_privateImageMetadataDescriptors;
- (void)isImage:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
@property(readonly, nonatomic) BOOL isPDF;
@property(readonly, nonatomic) BOOL isImage;
@property(readonly, nonatomic) BOOL isStationeryCompositeImage;
@property(readonly, nonatomic) BOOL isVideoOrAudio;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
- (void)discardIconImage;
@property(retain, nonatomic) NSImage *iconImage;
@property(readonly, copy, nonatomic) NSString *filenameWithoutHiddenExtension;
@property(nonatomic) unsigned long long approximateSize;
- (unsigned long long)approximateSizeOfWrapper;
- (BOOL)_isExpired;
@property(readonly, nonatomic) BOOL isDataDownloaded;
- (void)setFromHeadersImageSize:(struct CGSize)arg1 byteCount:(long long)arg2;
- (void)_downloadFinished;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)dataForFetchLevel:(long long)arg1;
- (void)_takeInfoFromMessageAttachment:(id)arg1 saveOriginalData:(BOOL)arg2 cleanImageMetadata:(BOOL)arg3;
- (void)_configureWithMimePart;
@property(nonatomic) BOOL isAutoArchiveAttachment;
@property(nonatomic) BOOL isMailDropImageThumbnail;
@property(retain, nonatomic) MCMimePart *mimePart;
- (void)setSizeForResizedImage:(struct CGSize)arg1;
- (void)setFileNameForResizedImage:(id)arg1;
@property(readonly, nonatomic) BOOL isFullSize;
- (void)revertToOriginalData;
- (void)setDataForResizedImage:(id)arg1;
@property(readonly, nonatomic) BOOL isScalable;
- (void)_setCurrentDataIfNil:(id)arg1;
@property(retain, nonatomic) NSData *currentData;
@property(retain, nonatomic) NSData *originalData;
@property(readonly, nonatomic) MCAttachment *attachmentWithCurrentData;
- (void)dealloc;
- (void)_mcAttachmentCommonInit;
- (id)initWithHeaderURL:(id)arg1;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)initWithStationeryCompositeImage:(id)arg1;
- (id)initWithRemoteURL:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMailInternalData:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

