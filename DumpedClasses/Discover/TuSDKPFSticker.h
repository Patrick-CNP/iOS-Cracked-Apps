//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface TuSDKPFSticker : TuSDKDataJson
{
    NSMutableArray *_texts;
    unsigned long long _idt;
    unsigned long long _groupId;
    unsigned long long _categoryId;
    NSString *_name;
    NSString *_preivewName;
    NSString *_stickerImageName;
    long long _type;
    UIImage *_image;
    struct CGSize _size;
}

+ (id)stickerWithType:(long long)arg1;
+ (id)sticker;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *stickerImageName; // @synthesize stickerImageName=_stickerImageName;
@property(copy, nonatomic) NSString *preivewName; // @synthesize preivewName=_preivewName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long idt; // @synthesize idt=_idt;
- (void).cxx_destruct;
- (id)stickerTextWithId:(unsigned long long)arg1;
- (id)copy;
- (void)setType:(long long)arg1;
- (void)setTexts:(id)arg1;
@property(readonly, nonatomic) NSArray *texts;
- (void)deserializationWithJson:(id)arg1;

@end
