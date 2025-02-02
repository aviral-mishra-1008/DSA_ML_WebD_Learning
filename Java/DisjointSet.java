import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class DisjointSet{
    private final List<Integer> ultimateParents;
    private final List<Integer> rank;

    public DisjointSet(int size){
        ultimateParents = new ArrayList<>(size);
        rank = new ArrayList<>(size);

        for(int i=0; i<size; i++){
            rank.add(0);
            ultimateParents.add(i);
        }
    }

    public int findParent(int node){
        if(ultimateParents.get(node)==node){
            return node;
        }
        ultimateParents.set(node, findParent(ultimateParents.get(node)));
        return ultimateParents.get(node);
    }

    public void takeUnion(int node1, int node2){

        if(Objects.equals(ultimateParents.get(node1), ultimateParents.get(node2))){
            return;
        }

        if(rank.get(node1)>=rank.get(node2)){
            rank.set(node1, rank.get(node1)+1);
            ultimateParents.set(node2,node1);
        }
        else{
            ultimateParents.set(node1,node2);
        }
    }

    public boolean sameComponent(int ele1, int ele2){
        return Objects.equals(ultimateParents.get(ele1),ultimateParents.get(ele2));
    }

}