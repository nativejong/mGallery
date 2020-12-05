//
//  mGallery.h
//  mGallery
//
//  Created by John Blaine on 12/5/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "mGalleryImg.h"

FOUNDATION_EXPORT double mGalleryVersionNumber;
FOUNDATION_EXPORT const unsigned char mGalleryVersionString[];


NS_ASSUME_NONNULL_BEGIN


@interface mGallery : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property (nonatomic, retain) UICollectionView *tbl;
@property (nonatomic, strong) NSMutableArray *myData;
@property (nonatomic, strong) mGalleryImg *galleryImg;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

- (void)refresh;
- (void)clear;

- (void)addIt:(nullable NSString*)nm dscr:(nullable NSString*)d url:(nullable NSString*)u urld:(nullable NSString*)ud;


@end

NS_ASSUME_NONNULL_END
