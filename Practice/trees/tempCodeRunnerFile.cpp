        reverse(temp.begin(), temp.end());
        for(int i = 0; i < temp.size(); i++){
            ans.push_back(temp[i]);
        }
    }
    for(auto a:ans){
        cout<<a<<" ";
    }