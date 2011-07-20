//
//  CampusDAO.h
//  ESIB_PAD_SOURCES
//
//  Created by Elias Medawar on 30.06.11.
//  Copyright 2011 HEFR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GenericDAO.h"
#import "Campus.h"

@protocol CampusDAOProtocol
- (void)consumeListOfCampus:(NSArray *)arrayOfCampus;
@optional
-(void) displayAllCampusOnMap:(NSArray *)campusArray;
@end

@interface CampusDAO : GenericDAO {
    
}
@property (retain)  id<CampusDAOProtocol> delegate;

- (void)getCampus:(BOOL)onlyCampusWithGPS;
- (void)getCampusAndDisplayOnMap;
@end
