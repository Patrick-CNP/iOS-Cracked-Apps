//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UP0223Crypto : NSObject
{
}

+ (id)parseHexStringToByteArray:(id)arg1;
+ (id)parseByteArrayToHexString:(char *)arg1;
+ (id)decryptionUseDES:(id)arg1 withKey:(id)arg2;
+ (id)encryptionUseDES:(id)arg1 withKey:(id)arg2;
+ (id)decryptionUseAES:(id)arg1 withKey:(id)arg2;
+ (id)encryptionUseAES:(id)arg1 withKey:(id)arg2;
+ (id)decodeBase64:(id)arg1;
+ (id)encodeBase64:(id)arg1;

@end
