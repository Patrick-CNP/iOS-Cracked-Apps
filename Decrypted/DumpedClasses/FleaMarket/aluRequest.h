//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface aluRequest : NSObject
{
    _Bool _isNeedEcode;
    _Bool _isUnitSupported;
    _Bool _doIsUnitSupported;
    NSString *_apiName;
    NSString *_apiVersion;
    id _data;
    NSNumber *_sessionExpiredOption;
    NSString *_userId;
    Class _returnClass;
}

@property(retain, nonatomic) Class returnClass; // @synthesize returnClass=_returnClass;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool doIsUnitSupported; // @synthesize doIsUnitSupported=_doIsUnitSupported;
@property(nonatomic) _Bool isUnitSupported; // @synthesize isUnitSupported=_isUnitSupported;
@property(nonatomic) NSNumber *sessionExpiredOption; // @synthesize sessionExpiredOption=_sessionExpiredOption;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode=_isNeedEcode;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (id)init;

@end
