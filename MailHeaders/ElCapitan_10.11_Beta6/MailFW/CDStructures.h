/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
    char _field4;
} CDStruct_c53ccb4e;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :2;
} CDStruct_76a5ddda;

typedef struct {
    unsigned int reserved:27;
    unsigned int isPartial:1;
    unsigned int partsHaveBeenCached:1;
    unsigned int hasTemporaryUid:1;
    unsigned int isHTML:1;
    unsigned int isRich:1;
} CDStruct_07ba05d6;

typedef struct {
    int version;
    int count;
    int timeStamp;
    float tocHeight;
    unsigned int sortOrder;
    unsigned int sortedAscending;
    int unused1;
    int unused2;
} CDStruct_c4d47a41;

typedef struct {
    long long _field1;
    unsigned long long _field2;
} CDStruct_1dee9796;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned short _field1[64];
    struct __CFString *_field2;
    unsigned short *_field3;
    char *_field4;
    CDStruct_912cb5d2 _field5;
    long long _field6;
    long long _field7;
} CDStruct_f9502b4c;

